let main = document.getElementById("main");
const size = 8;
let table = document.createElement("table");
table.style.borderCollapse = "collapse";
for (let y = 0; y < size; y++) {
  let tr = document.createElement("tr");
  for (let x = 0; x < size; x++) {
    let td = document.createElement("td");
    //td.innerText = "X";
    td.style.background = (x + y) % 2 ? "#383" : "#5c5";
    td.style.width = "3em";
    td.style.height = "3em";
    td.onclick = function (e) {
      e.target.style.transform = "rotate(45deg)";
    };
    tr.appendChild(td);
  }
  table.appendChild(tr);
}
main.appendChild(table);