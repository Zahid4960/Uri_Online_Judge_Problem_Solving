SELECT 
    PRODUCTS.NAME,
    PROVIDERS.NAME,
    CATEGORIES.NAME
FROM PRODUCTS
INNER JOIN PROVIDERS ON PRODUCTS.ID_PROVIDERS = PROVIDERS.ID
INNER JOIN CATEGORIES ON PRODUCTS.ID_CATEGORIES = CATEGORIES.ID
WHERE PROVIDERS.NAME = 'Sansul SA'
AND CATEGORIES.NAME = 'Imported';