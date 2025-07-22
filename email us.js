const form = document.getElementById("feedbackForm");

form.addEventListener("submit", (event) => {
  event.preventDefault();

  const nameInput = document.getElementById("name");
  const emailInput = document.getElementById("email");
  const feedbackInput = document.getElementById("feedback");


  if (nameInput.value === "" || emailInput.value === "" || feedbackInput.value === "") {
    alert("Please fill in all required fields.");
    return;
  }


  if (!emailInput.value.includes("@")) {
    alert("Please enter a valid email address.");
    return;
  }

  alert("Your feedback has been submitted. Thank you!");
  form.reset();
});