
<?php echo '
        
        <p>
            <A STYLE="color: black;" onmouseover="describe_draw()" onmouseout="normal()" HREF="content/drawable.html">Simple Drawing App</A>
            <BR>
        </p>
        <p id="pp1"></p><br>
        <p>
            <A STYLE="color: black;" onmouseover="describe_STGame()" onmouseout="normal()"
            HREF="content/STGame/kbm.html">Star Trek Side Scroller</A>
            <BR>
        </p>
        <p id="pp2"></p><br>
        <script type="text/javascript">
            function describe_draw() {
                document.getElementById("pp1").innerHTML = "This is a simple drawing app written entirely in javascript on an html canvas.  Please view source and click on the included javascript file link in your browser to see code.";
            }
            
            function describe_STGame() {
                document.getElementById("pp2").innerHTML = "This is a Star Trek based side scroller fan game that I wrote to learn more about HTML canvas and do it with boiler plate code only(no frameworks). ~ Music by my dawg Dfire.  See dfire.net for more of his projects."
            }
            
            function normal() {
                document.getElementById("pp1").innerHTML = " ";
                document.getElementById("pp2").innerHTML = " ";
            }
        </script>
';
?>

