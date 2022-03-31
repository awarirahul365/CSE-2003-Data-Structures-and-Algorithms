SELECT ct.name as name
from Customer as ct
where ct.referee_id!=2 or ct.referee_id is null;
