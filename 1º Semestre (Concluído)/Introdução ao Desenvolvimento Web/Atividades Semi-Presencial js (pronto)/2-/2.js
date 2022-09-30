//Some dois valores lidos e imprima o resultado
function somarNum() {
    var numero = parseFloat((document.getElementById('numero').value));
    var numero2 = parseFloat((document.getElementById('numero2').value));

    var soma = numero + numero2;
    document.getElementById('resultado').innerHTML = 'A soma é ' + soma;

}