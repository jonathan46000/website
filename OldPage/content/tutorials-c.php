
<?php echo '
        
        <p>
            <A STYLE="color: black;" onmouseover="describe_calc()" onmouseout="normal()" HREF="qt_calculator.php">QT Calculator Tutorial</A>
        </p>
        <p id="pp1"></p>
        <script type="text/javascript">
            function describe_calc() {
                document.getElementById("pp1").innerHTML = "This is a calculator application written in C++ with the QT framework.  The calculator class is completely encapsulated from the graphical interface.  This was part of a class given in 2014 at Hack.RVA.  The notes in the code give an explanation of how it works.  If you would like it explained in lecture format email me and I will see what I can do";
            }
            
            function normal() {
                document.getElementById("pp1").innerHTML = " ";
            }
        </script>

';
?>

