<?php

	session_start(); // begins session
	require_once "connect.php"; // WYMAGAJ, if fails, it generates an error not a warning
	
	$connection = @new mysqli($host,$db_user,$db_password,$db_name); // @ hides unecessary shit, security
	
	if($connection->connect_errno!=0) // so if connection somewhat fails
	{
		echo "Error number ".$connection->connect_errno; // error info
	}
	else
	{
		$Login = $_POST['login'];
		$Password = $_POST['password'];
		
		$Login = htmlentities($Login,ENT_QUOTES, "UTF-8"); 
		$Password = htmlentities($Password,ENT_QUOTES, "UTF-8");// changes stuff like ' > etc in the var to stuff like %gt(greater then sign) etc
	
		// now we send the query into the query if
		//$sql ="SELECT * FROM userlist WHERE Login='$Login' AND Password='$Password'"; // prepare question for the database
		
		$safe_Login = mysqli_real_escape_string($connection,$Login);
		$safe_Password = mysqli_real_escape_string($connection,$Password);
		$sql = "SELECT * FROM userlist WHERE Login='$safe_Login' AND Password='$safe_Password'";
		
		if($connection == true) echo "connection active"."<br/>";
		/*echo "test connection begins..."."<br/>";
		echo "Login: "."$Login"."<br/>";
		echo "Safe Login: "."$save_Login"."<br/>";
		echo "Password: "."$Password"."<br/>";
		echo "Safe Password: "."$save_Password"."<br/>";*/
		if(
		$result = @$connection->query($sql)
		// instead of $sql, realted to SQL injection
		
		
		/*"",//realted to SQL injection, gets set in first %s
		""))*/
		)	// get result
		{
			echo "test connection begins..."."<br/>";
			$user_num = $result->num_rows; 
			if($user_num>0)
			{
				$db_row = $result->fetch_assoc(); //saves data
				$_SESSION['user']=$db_row['Login']; //uses data saved before
				$_SESSION['perm']=$db_row['Permissions'];
				
				//echo "test positive"."<br/>";	

				$_SESSION['loggedin']=true;
				unset($_SESSION['failedlogin']); // delets failedlogin variable
				$result->free_result(); // deletes unecessary db data,not saved in anything else
				header('Location: loginsuccess.php'); // redirects to loginsuccess.php
			}
			else
			{
				//echo "test fail"."<br/>";
				//echo "test login and password"."<br/>"."$Login "."<br/>"."$Password"."<br/>";
				
				$_SESSION['failedlogin'] = '<span style="color:red">Wrong login or password</span>';
				header('Location: index.php'); 
			}
		}
		
		$connection->close(); // clear shit up
	}
	

?>