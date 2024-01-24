-- creates the table unique_id
-- If the table already exists, the script doesn't fail
CREATE TABLE IF NOT EXISTS unique_id (
		id INT DEFAULT 1 UNIQUE,
			name VARCHAR(256)
			);
