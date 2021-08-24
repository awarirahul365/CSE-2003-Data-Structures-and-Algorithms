//interviewbit

SELECT r.reviewer_name
FROM reviewers as r
INNER JOIN ratings as rd
ON r.reviewer_id=rd.reviewer_id
WHERE rd.reviewer_stars IS NULL;
