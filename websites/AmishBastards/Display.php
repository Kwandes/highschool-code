<?php
 session_start();
 
 

 $_SESSION['WhoAreWe'] = "We are Amish Bastards, a group of random ppl from diffrent religions( 2 of us are jewish) that suck at this game(except Kwandes, he is our carry). "."</br>"."If you encounter us in game, you can be sure we will loose a fight against you, even if it's 5 guys with ak versus a lone naked with a spear. "."</br>"."So please don't attack us.";
 
 $_SESSION['Members'] = "Kwandes, CP,Boru,Alex";
 
 $_SESSION['Gallery'] = "<img src='img/Kwandes.png'/>";
 
 $_SESSION['JoinUs'] = "<h3>Wanna join our amazing Clan?</h3>"."You can either contact our best member, Kwandes via.:"."</br>"
 ."<i>Mail: bz.jasiek@gmail.com</i>"."</br>"."<i>Steam: Kwandes</i>"."</br>"."<i>Tinder: KwandesHasBigCock</i>"."</br>"
 ."OR message our leader, Alex(idk why you would do that):"."</br>"."<i>Steam: IStoleYourWife</i>";
 
 header('Location: index.php');

?>
