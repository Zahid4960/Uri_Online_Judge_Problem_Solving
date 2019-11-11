SELECT products.id, products.name 
FROM products
WHERE products.price NOT BETWEEN 10 AND 100;
