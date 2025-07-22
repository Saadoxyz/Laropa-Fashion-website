*{
    margin: 0;
    padding: 0;
    font-family: 'Montserrat',sans-serif;
} 
*{ margin: 0px;
    padding: 0px;}
    .bgimage{
background-image: url('f1.jpg');
background-size: 100% 110%;
width: 100%;
height: 100vh;
 }
 .menu{width: 100%;
    height: 80px;
    background-color: rgba(0,0,0,0.5)
}
.leftmenu
{
    width:25%;
    line-height:80px;
    float: left;
}
 .leftmenu  h4 {
    padding-left:  70px;
    font-weight: bold;
    color: white;
    font-size:30px;
    font-family: 'Montserrat',sans-serif;
}


body{
   display:flex;
   justify-content: center;
   align-items: center;
   height: 100vh;
   background-color: #000;
}
h2{ font-size: 5em;
    letter-spacing:  15px;
    color:#0e3742;
    text-transform: uppercase;
    text-align: center;
    -webkit-box-reflect: below 1px linear-gradient( transparent ,#0004);
     animation: blink 3s linear infinite;
}
 h4 { font-size: 5em;
    letter-spacing:  10px;
    color:#9fa053;
    text-transform: uppercase;
    text-align: center;
    -webkit-box-reflect: below 1px linear-gradient( transparent ,#0004);
     animation: blink 3s linear infinite;
     text-shadow: 0 0 10px #ccd643,0 0 20px #ccd643,0 0 40px #ccd643,0 0 80px #ccd643,0 0 160px #ccd643
     
}
.rightmenu{
    width:75%;
    height:100px;
    float:right;
    
}
.rightmenu  ul li{
    font-family: 'Montserrat',sans-serif;
   display: inline-block;
   list-style:none;
   font-size: 15px;


}

@keyframes blink{
    18.1%,20.1%,30%,50%,60.1%,65%,80.1%,90%,92.1%,100%{
    color: #fff;
    text-shadow: 0 0 10px #ccd643,0 0 20px #ccd643,0 0 40px #ccd643,0 0 80px #ccd643,0 0 160px #ccd643
}
}