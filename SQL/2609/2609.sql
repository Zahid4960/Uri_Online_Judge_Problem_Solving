SELECT
    CATEGORIES.NAME AS NAME,
    SUM(PRODUCTS.AMOUNT) AS SUM
FROM PRODUCTS
INNER JOIN CATEGORIES ON PRODUCTS.ID_CATEGORIES = CATEGORIES.ID
GROUP BY CATEGORIES.NAME