SELECT
    PRODUCTS.NAME,
    CATEGORIES.NAME
FROM PRODUCTS
INNER JOIN CATEGORIES ON PRODUCTS.ID_CATEGORIES = CATEGORIES.ID
WHERE PRODUCTS.AMOUNT > 100 
AND PRODUCTS.ID_CATEGORIES IN (1,2,3,6,9);