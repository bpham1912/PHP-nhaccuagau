<link href="../css/bootstrap.min.css" rel="stylesheet" type="text/css"/>

<body>
    <div class="container">
        <?php
//kiem tra xem trang [Lab2_Register.html] da duoc chay chua
        if (isset($_POST["btnOK"]) == FALSE) {
            //chua chay trang html -> chuyen huong ve trang do
            header("location:register.html");
            exit();
        }
            $username = $_POST["txtName"];
            $passwords = $_POST["txtPassword"];
            $email = $_POST["txtMail"];
            $gender = $_POST["rdGender"];
            $dob = $_POST["txtBD"];
            $hobbies = $_POST["ckHob"];
            $note = $_POST["txtNote"];

            //in cac thong tin dang ky ra man hinh
            echo "<h3>Thong tin ca nhan </h3>";
            echo "<p>Ho ten: $name </p>";
            echo "<p>email: $mail </p>";
            echo "<p>Thanh pho: $city </p>";
            echo "<p>Gioi tinh: $gender </p>";

            $namsinh = gmdate("Y", strtotime($dob));
            $namHienTai = gmdate("Y");
            $tuoi = $namHienTai - $namsinh;
            echo "<p>Ngay sinh: $dob - Tuoi: $tuoi </p>";

            echo "<p>So thich: ";
            foreach ($hobbies as $st) {
                echo "$st &nbsp;";
            }
            
            echo "</p>";
            echo "<p>Ghi chu: $note</p>";
            ?>

        </div>
    </body>
</html>

