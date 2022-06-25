var bd;
var m = 10;
var s = 00;
var time = document.getElementById('dn');

function countdown() {
    bd = setInterval(cd, 10);
}

function cd() {
    if (s == 00) {
        s = 60;
        m--;
    }
    s--;
    if (m == 0 && s == 0) {
        clearInterval(bd);
    }
    s < 10 ? s = '0' + s : s;
    time.innerHTML = m + " : " + s;
}
document.getElementById('stop').addEventListener("click", function() {
    clearInterval(bd);
    if (s != 0 && m != 0) {
        this.nextElementSibling.innerHTML = 'Ctn';
    }
})