SELECT
    MOVIES.ID,
    MOVIES.NAME 
FROM MOVIES
INNER JOIN GENRES ON MOVIES.ID_GENRES = GENRES.ID
WHERE GENRES.DESCRIPTION LIKE '%Action%'