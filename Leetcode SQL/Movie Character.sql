//interviewbit

SELECT CONCAT(d.director_first_name,d.director_last_name) AS director_name,m.movie_title AS movie_title
FROM directors as d
INNER JOIN movies_directors as md
ON d.director_id=md.director_id
INNER JOIN movies as m
ON md.movie_id=m.movie_id
INNER JOIN movies_cast as mc
ON m.movie_id=mc.movie_id
WHERE mc.role='SeanMaguire';
