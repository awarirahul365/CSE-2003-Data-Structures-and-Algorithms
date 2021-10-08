#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <bits/stdc++.h>

int processArray(std::vector<int> &array) {
  /* 
   * Do not make any changes outside this function.
   *
   * Modify this function to process `array` as indicated
   * in the question. At the end, return the length of the
   * array.
   *
   * Please create appropriate structs/classes, and use appropriate
   * data structures as necessary.
   *
   * Do not print anything in this function
   * Do not write anything to the standard output
   *
   * Submit this entire program (not just this function)
   * as your answer
   */
   int sz=array.size();
   std::vector<std::vector<int>> upclimb;
   std::vector<std::vector<int>> downclimb;
   int i=0;
   while(i<sz)
   {
   	    int num=array[i];
   	    if(array[i+1]>=num && i+1<sz)
   	    {
   	    	std::vector<int>temp1;
   	    	temp1.clear();
   	    	int prev=num;
   	    	temp1.push_back(num);
   	    	int j;
   	    	for(j=i+1;j<sz;j++)
   	    	{
   	    		if(array[j]>=prev)
   	    		{
   	    			temp1.push_back(array[j]);
					prev=array[j];	
				}
				else
				{
					break;
				}
			}
			upclimb.push_back(temp1);
			i=j;
		}
		else
		{
			i++;
		}
   }
   int k=0;
   while(k<sz)
   {
       int hf=array[k];
       if(array[k+1]<=hf && k+1<sz)
       {
           std::vector<int>temp2;
           temp2.clear();
           int p2=hf;
           temp2.push_back(hf);
           int h;
           for(h=k+1;h<sz;h++)
           {
               if(array[h]<=p2)
               {
                   temp2.push_back(array[h]);
                   p2=array[h];
               }
               else
               {
                   break;
               }
           }
           downclimb.push_back(temp2);
           k=h;
       }
       else
       {
           k++;
       }
   }
   int longestlength=-1;
   int ans=-1;
   for(int y=0;y<upclimb.size();y++)
   {
       int len1=upclimb[y].size();
       if(len1>=longestlength)
       {
           longestlength=len1;
       }
   }
   for(int z=0;z<downclimb.size();z++)
   {
       int len2=downclimb[z].size();
       if(len2>=longestlength)
       {
           longestlength=len2;
       }
   }
   for(int u=0;u<upclimb.size();u++)
   {
       if(upclimb[u].size()==longestlength)
       {
           int szup=upclimb[u].size()-1;
           int diff=upclimb[u][szup]-upclimb[u][0];
           if(diff>=ans)
           {
              ans=diff;
           }
       }
   }
   for(int t=0;t<downclimb.size();t++)
   {
       if(downclimb[t].size()==longestlength)
       {
           int szdn=downclimb[t].size()-1;
           int diff2=downclimb[t][0]-downclimb[t][szdn];
           if(diff2>=ans)
           {
               ans=diff2;
           }
       }
   }
   return ans;
}

int main(void) {
  std::vector<int> array;
  int val;
  while (std::cin >> val) {
    if (val < 0) break;
    array.push_back(val);
  }
  std::cout << processArray(array) << std::endl;
  return 0;
}

