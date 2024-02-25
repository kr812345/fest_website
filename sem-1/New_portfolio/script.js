
// function let_prnt(L){
//     if (L === 5){
//         return alert("You are right.");
//     }       
// }


// let L = 5;

// let_prnt(L);

// document.querySelector("html").addEventListener("click", function () {
//     alert("Ouch! Stop poking me!");
//   });

const myImage = document.querySelector("img");

myImage.onclick = () => {
    const mySrc = myImage.getAttribute("src");
    if (mySrc === "front_img.png")
    {   
        myImage.setAttribute("src", "img2.jpeg");
    } else {
        myImage.setAttribute("src","front_img.png");
    }
};


let myButton = document.querySelector("button");
let myHeading = document.querySelector("h1");

function setUsername(){
    const myName = prompt("Please Enter Your Name: ");
    if (!myName){
        setUsername();
    } else {
        localStorage.setItem("name", myName);
        myHeading.textContent = `Kahna is awesome, ${myName}`;
    }
}

if (!localStorage.getItem("name")){
    setUsername();
} else {
    const storedName = localStorage.getItem("name");
    myHeading.textContent = `Kahna is Awesome, ${storedName}`;
}

myButton.onclick = () => {
    setUsername();
};


