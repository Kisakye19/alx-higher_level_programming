-- creates the table force_name
-- if it exists already, the script doesn't fail
CREATE TABLE IF NOT EXISTS force_name (
		id INT,
			name VARCHAR(256) NOT NULL
			);
