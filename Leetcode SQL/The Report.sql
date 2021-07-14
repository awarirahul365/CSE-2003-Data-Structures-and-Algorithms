SELECT IF(c2.Grade<8,NULL,c1.Name),c2.Grade,c1.Marks
FROM Students AS c1
INNER JOIN Grades As c2
WHERE c1.Marks BETWEEN c2.Min_Mark AND c2.Max_Mark
ORDER BY c2.Grade DESC,c1.Name ASC;
