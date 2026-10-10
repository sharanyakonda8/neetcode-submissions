-- Write your query below
SELECT customer_id,customer_name
FROM (SELECT c.customer_id,c.customer_name,o.product_name
FROM customers c
JOIN orders o
ON c.customer_id=o.customer_id
) AS t
GROUP BY customer_id,customer_name
HAVING
    SUM(CASE WHEN product_name = 'A' THEN 1 ELSE 0 END) > 0
    AND SUM(CASE WHEN product_name = 'B' THEN 1 ELSE 0 END) > 0
    AND SUM(CASE WHEN product_name = 'C' THEN 1 ELSE 0 END) = 0
ORDER BY customer_id;

