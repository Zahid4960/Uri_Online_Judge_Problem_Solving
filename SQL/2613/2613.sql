SELECT
    MOVIES.ID,
    MOVIES.NAME
FROM MOVIES
INNER JOIN PRICES ON MOVIES.ID_PRICES = PRICES.ID
WHERE PRICES.VALUE < 2.00