<?php 
$serverDB = "localhost:3306";
$dbName = "project";
$username = "root";
$password = "";

$conn = mysqli_connect($serverDB, $username, $password, $dbName);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
 mysqli_query($conn,"SET NAMES 'UTF8'");// hien thị  chữ có dáu

$sql = "SELECT ID, Name, Content FROM tbproject";
$result =mysqli_query($conn,$sql); // lấy dữ liệu ừ sql
if (mysqli_num_rows($result) > 0) { // cái này hay lỗi. do ver PHP
    // duyet qua tung dong du liệu hiện có
    // output dữ liệu trên trang
    while($row = mysqli_fetch_assoc($result)) {
        echo "id: " . $row["ID"]. " </br>- Name: " . $row["Name"]. "</br> "
            . $row["Content"]. "<br>";
    }
    //e thay bên day anh dung $row['ten cua bang du lieu'] 
} else {
    echo "0 results";
}
$conn->close();
?>
<form action="" method="post">
    <table>
        <tr>
            <th>Name</th>
            <td><input type="text" name="title" value=""></td>
        </tr>

        <tr>
            <th>Ngày tháng:</th>
            <td><input type="date" name="date" value=""></td>
        </tr>

        <tr>
            <th>Author:</th>
            <td><input type="text" name="author" value=""></td>
        </tr>

        <tr>
            <th>Nội dung:</th>
            <td><textarea cols="30" rows="7" name="content"></textarea></td>
        </tr>
    </table>
    <button type="submit">Gửi</button>
</form>


