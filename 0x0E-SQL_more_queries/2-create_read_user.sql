--  creates the database hbtn_0d_2 and the user user_0d_2 with the SELECT privilege and password: user_0d_2_pwd
-- the script doesn't fail if they already exist
CREATE DATABASE IF NOT EXISTS hbtn_0d_2;
CREATE USER IF NOT EXISTS 'user_0d_2'@'localhost' IDENTIFIED BY 'user_0d_2_pwd';
GRANT SELECT ON hbtn_0d_2.* TO 'user_0d_2'@'localhost';
