<?php
  /*
     apache web server error log /var/log/apache2/
  */

  $db = new mysqli("localhost", "root", "brocchi", "hospital");
  $name = $_GET['name'];
  $surname = $_GET['surname'];
  $q = "SELECT * FROM doctors WHERE name = '" . "$name" . "'" . " AND surname = '" . "$surname'";
  $res = $db -> query($q);

  echo "<html><body>";
  while ($rec = $res -> fetch_assoc()) {
      echo $rec['id'] . "  " . "  " . $rec['name'] . "  " . $rec['surname'];
      echo "</br>";
  }
  echo "</body></html>";
?>
