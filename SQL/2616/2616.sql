SELECT
    CUSTOMERS.ID,
    CUSTOMERS.NAME
FROM CUSTOMERS
LEFT JOIN LOCATIONS ON CUSTOMERS.ID = LOCATIONS.ID_CUSTOMERS
WHERE LOCATIONS.ID_CUSTOMERS IS NULL;