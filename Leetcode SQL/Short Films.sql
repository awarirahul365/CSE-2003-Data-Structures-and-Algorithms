//interviewbit

SELECT m.movie_title as movie_title,m.movie_year as movie_year,CONCAT(d.director_first_name,d.director_last_name) as director_name,CONCAT(a.actor_first_name,a.actor_last_name) as actor_name,mc.role as role
FROM directors as d
INNER JOIN movies_directors as md
ON d.director_id=md.director_id
INNER JOIN movies as m
ON md.movie_id=m.movie_id
INNER JOIN movies_cast as mc
ON m.movie_id=mc.movie_id
INNER JOIN actors as a 
ON a.actor_id=mc.actor_id
ORDER BY m.movie_time
limit 1;
