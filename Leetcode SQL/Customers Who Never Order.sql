SELECT c.name As Customers
FROM Customers As c
LEFT JOIN Orders As o
ON c.Id=o.CustomerId
WHERE o.CustomerId IS NULL;

