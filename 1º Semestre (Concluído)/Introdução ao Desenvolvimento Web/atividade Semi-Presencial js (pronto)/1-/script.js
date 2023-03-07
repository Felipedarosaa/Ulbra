// Leia um valor e imprima os resultados: “É maior que 10” ou “Não é maior que 10” ou ainda “É igual a 10”
function verificarMaior() {

    var num = parseFloat((document.getElementById('numero').value));

    if (num > 10) {
        document.getElementById('resultado').innerHTML = num + " é maior que 10";
    }

    else if (num < 10) {
        document.getElementById('resultado').innerHTML = num + " é menor que 10";
    }
    else if (num == 10) {
        document.getElementById('resultado').innerHTML = num + " é igual à 10";
    }
}
