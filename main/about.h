 const char htmlAbout[] PROGMEM = R"=====(
<html>

<head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
        <meta http-equiv="refresh" content="45">

    <title>ABOUT</title>

    <style>
 
/* Media query for smaller screens (phones) */
@media only screen and (max-width: 600px) {
    h1 {
        font-size: 30px; /* Shrink h1 font size by 10px */
    }

    p {
        font-size: 15px; /* Shrink p font size by 10px */
    }
}
        *{
            margin: 0px;
            padding: 00px;
            box-sizing: border-box;
            font-family: Verdana, Tahoma, sans-serif;
        }

        html, body {
            overflow-x: hidden;
            background-color: #FFFFFF;
            height: 100%;
        }

        .flex-Container {
            display: flex;
            flex-direction: column;
            background-color: #FFFFFF;
            align-items: center;
        }

        h1 {
            font: bold;
            font-size: 32px;
            font-family: Arial;
            color: #173042;
            text-align: center;
        }

        p {
            font-size: 19px;
            font-family: Arial;
            color: #36566D;
            text-align: center;
        }

        th, td {
            font-size: 25px;
            padding: 8px;
            text-align: left;
            border-bottom: 1px solid #ddd;
        }

        .clearfix::after {
            content: "";
            display: block;
            clear: both;
        }

        #intro {
            width: 100%;
             max-width: 1200px; /* Set maximum width */
            font-family: Verdana, Tahoma, sans-serif;
            min-height: 50px;
            padding:20px;
            border-right: 20px whitesmoke;
            border-left: 20px whitesmoke;
            background-color: rgb(226, 232, 236);
            overflow: hidden; /* Prevent content from overflowing */
             position: relative; /* Relative positioning for absolute positioning */
        }

        #main {
            width: 100%;
            min-height: 50px;
            background-color: rgb(255, 255, 255);
            margin-bottom: 10px;
            border: 10px solid rgb(255, 255, 255);
        }

        #footer-div {
            width: 100%;
            min-height: 50px;
            line-height: 50px;
            background-color: #173042;
            text-align: center;
            font-size: smaller;
        }
                #page_break-div {
            width: 100%;
            min-height: 20px;
            line-height: 20px;
            background-color: #173042;
            text-align: center;
            font-size: smaller;
        }
        .LandOverview div {
            vertical-align: middle;
            font-size: 30px;
            color: rgb(30, 28, 28);
            letter-spacing: 1.20px;
        }

        .header {
            display: block;
            margin: 0 auto;
            width: 100%;
            max-width: 100%;
            box-shadow: none;
            background-color: #173042;   /* #FC466B */
            text-align: center;
            position: fixed;
            height: 60px!important;
            overflow: hidden;
            z-index: 20;
        }

        .navbar {
            display: flex;
            justify-content: space-between;
            align-items: center;
            padding: 0 20px;
            width: 100%;
            height: 60px;
            background-color: #173042;
            color: #fff;
            position: fixed;
            top: 0;
            left: 0;
                z-index: 20; /* Set a higher z-index for the sidebar */

        }

        .navbar a {
            color: #fff;
            text-decoration: none;
            font-size: 18px;
            padding: 10px;
        }

        .navbar a:hover {
            background-color: #33475b;
        }

        .main_body {
            margin: 0 auto;
            display: block;
            height: 100%;
            margin-top: 60px; /* Adjusted to accommodate the fixed navbar */
        }

        .mainInner {
            display: table;
            height: 100%;
            width: 100%;
            text-align: center;
        }

        .mainInner div {
            display: table-cell;
            vertical-align: middle;
            font-size: 3em;
            font-weight: bold;
            letter-spacing: 1.25px;
        }

        #sidebarMenu {
            height: 100%;
            position: fixed;
            left: 0;
            width: 250px;
            margin-top: 60px;
            transform: translateX(-250px);
            transition: transform 250ms ease-in-out;
            background: linear-gradient(186deg, #173042 32%, #ce7c7c 68%);
                z-index: 20; /* Set a higher z-index for the sidebar */

        }

        .sidebarMenuInner {
            margin: 0;
            padding: 0;
            border-top: 1px solid rgba(255, 255, 255, 0.10);
        }

        .sidebarMenuInner li {
            list-style: none;
            color: #fff;
            text-transform: uppercase;
            font-weight: bold;
            padding: 20px;
            cursor: pointer;
            border-bottom: 1px solid rgba(255, 255, 255, 0.10);
        }

        .sidebarMenuInner li span {
            display: block;
            font-size: 14px;
            color: rgba(255, 255, 255, 0.50);
        }

        .sidebarMenuInner li a {
            color: #fff;
            text-transform: uppercase;
            font-weight: bold;
            cursor: pointer;
            text-decoration: none;
        }

        .sidebarMenuInner span a {
            display: block;
            font-size: 14px;
            color: rgba(255, 255, 255, 0.50);
        }

        .sidebarMenuInner li:hover {
            background-color: ce7c7c; 
        }

        input[type="checkbox"]:checked ~ #sidebarMenu {
            transform: translateX(0);
        }

        input[type=checkbox] {
            transition: all 0.3s;
            box-sizing: border-box;
            display: none;
        }

        .sidebarIconToggle {
            transition: all 0.3s;
            box-sizing: border-box;
            cursor: pointer;
            position: absolute;
            z-index: 99;
            height: 100%;
            width: 100%;
            top: 22px;
            left: 15px;
            height: 22px;
            width: 22px;
        }

        .spinner {
            transition: all 0.3s;
            box-sizing: border-box;
            position: absolute;
            height: 3px;
            width: 100%;
            background-color: #fff;
        }

        .horizontal {
            transition: all 0.3s;
            box-sizing: border-box;
            position: relative;
            float: left;
            margin-top: 3px;
        }

        .diagonal.part-1 {
            position: relative;
            transition: all 0.3s;
            box-sizing: border-box;
            float: left;
        }

        .diagonal.part-2 {
            transition: all 0.3s;
            box-sizing: border-box;
            position: relative;
            float: left;
            margin-top: 3px;
        }

        input[type=checkbox]:checked ~ .sidebarIconToggle > .horizontal {
            transition: all 0.3s;
            box-sizing: border-box;
            opacity: 0;
        }

        input[type=checkbox]:checked ~ .sidebarIconToggle > .diagonal.part-1 {
            transition: all 0.3s;
            box-sizing: border-box;
            transform: rotate(135deg);
            margin-top: 8px;
        }

        input[type=checkbox]:checked ~ .sidebarIconToggle > .diagonal.part-2 {
            transition: all 0.3s;
            box-sizing: border-box;
            transform: rotate(-135deg);
            margin-top: -9px;
        }

 .image-container {
            position: relative;
            width: 100%;
            max-width: 2000px; /* Set maximum width for the image container */
            max-height:2000px; /* Set maximum height for the image container */
            overflow: hidden;
            margin: 0 auto; /* Center the image container */
                z-index: 10; /* Lower z-index for the image container */

        }

        .image-container img {
            width: 100%;
            height: auto; /* Ensure aspect ratio is maintained */
            display: block;
            margin: 0 auto; /* Center the image */
        }

        .text-overlay {
            position: absolute;
            top: 40%;
            left: 50%;
            transform: translate(-50%, -50%);
            background-color: rgba(255, 255, 255, 0.7);
            padding: 20px;
            border-radius: 5px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }


        
        /*Video style stuff*/

        .sensor-section{
          display: flex;
          justify-content: space-between;
          align-items: center;
          margin-bottom: 20px;
                      background-color: rgb(226, 232, 236);
        }

        .sensor-info{
          flex: 1;
          text-align: left;
        }
        .sensor-video{
          flex: 1;
        }

@media( max-width:768px){

          .sensor-section{
          flex-direction: column;
          align-items: center;
        }

        .sensor-info{
          width: 80%;
          text-align: center;
        }
        .sensor-video{
           width: 80%;
        }

}

</style>
</head>

<body>
     <div class="header"></div>
      <input type="checkbox" class="openSidebarMenu" id="openSidebarMenu">
      <label for="openSidebarMenu" class="sidebarIconToggle">
      <div class="spinner diagonal part-1"></div>
      <div class="spinner horizontal"></div>
    <div class="spinner diagonal part-2"></div>
  </label>

    <div id="sidebarMenu">
    <ul class="sidebarMenuInner">
      <li><a href="/" role="button">ABOUT</a></li>
      <li><a href="/demos" role="button">DEMOS</a></li>
      <li><a href="#" role="button" onclick="toggleFeatures()">FEATURES</a>
        <span id="featuresSubMenu" style="display: none;">
          <a href="/dht11" role="button">DHT11</a>
          <a href="/gps" role="button">GPS</a>
          <a href="/heart" role="button">HEART</a>
          <a href="/ultrasonic" role="button">ULTRASONICS</a>
        </span>
      </li>
    </ul>
  </div>



<div class="image-container">
      <img src="https://d2dsc1gf0t80gb.cloudfront.net/wp-content/uploads/2018/07/25161020/Will-Broadhead-Bikeshed-Cafe-Racer-Cup-20-1000x667.jpg" width="340" height="380">
      <div class="text-overlay">
      <br/><br/>
          <h1>Welcome to The World of Smart Motorcycle</h1>
          <p>Our Smart Motorcycle design enhances the road experience, bringing safety to every mile. From advanced navigation systems, to real-time diagnostics, these systems are crafted to keep you connected while you ride.</p>
      </div>
  </div>


<div id="page_break-div"></div>

      <div class="flex-Container">

  <div id="main" class="main_body">
            <div class="mainInner">
                <div id="intro">
                        <h1>About</h1>
                    <div style="width: 50%; text-align: right;">
<p>Did you know that approximately 1.3 million lives are cut short due to road accidents every year? Motorcyclists account for nearly 18% of fatalities on roads.
<p>I am designing a smart motorcycle, that aims to reduce the number of road accidents caused by motorcyclists. </p>
<p>I plan to do this by using multiple sensors to record if vehicles are closely approaching a motorcyclist, tracking the riders heart rate, tracking location and by measuring temperature and humidity so a motorcyclist knows when to be more cautious depending on weather conditions. 
</p>               
     </div>
                </div>
            </div>
  </div>
  </div>




<br/>

      <!--hardware section -->
<div class = "sensor-section">
  <div class = "sensor-info">
          <br/>

    <h1>Hardware</h1>
      <br>
          <p>The project is controlled by an ESP32 microcontroller. It utilizes various sensors. These include:</p>
            <p>- DHT11</p>
            <p>- GPS</p>
            <p>- Heart-Rate Sensor</p>
            <p>- Ultrasonic Sensors</p>

        </div>
        <div class = "sensor-video">
                <br/>

<iframe src="https://drive.google.com/file/d/1O0CXSFkazd9vlvtEDuWC4LiIadjSZRXm/preview" width="640" height="480" allow="autoplay"></iframe>     
   </div>
   </div>
                <br/>
                <br/>
<div id="footer-div">© ABOUT </div>

<script>
    function toggleFeatures() {
      var subMenu = document.getElementById("featuresSubMenu");
      subMenu.style.display = subMenu.style.display === "block" ? "none" : "block";
    }
  </script>
</body>

</html>
)=====";