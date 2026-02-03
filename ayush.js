const noBtn = document.getElementById("noBtn");

noBtn.onmouseover = function () {
  const x = Math.random() * 200;
  const y = Math.random() * 100;

  noBtn.style.left = x + "px";
  noBtn.style.top = y + "px";
};

function yesClicked() {
  document.getElementById("page1").style.display = "none";
  document.getElementById("page2").style.display = "block";
}