// Leia 2 valores e a operação a ser realizada (+, -, * ou /) e imprima o resultado (use um switch)

function calculadora() {
    var num1 = parseFloat(document.getElementById('num1').value);
    var num2 = parseFloat(document.getElementById('num1').value);
    var operacao = document.getElementById('operacao').value;
   
    switch (operacao) {
        case '+':
            var soma = num1 + num2;
            document.getElementById('resultado').innerHTML = "A soma é " + soma;
            break;

        case '-':
            var subtracao = num1 - num2;
            document.getElementById('resultado').innerHTML = "A subração é " + subtracao;
            break;

        case '*':
            var multiplicacao = num1 * num2;
            document.getElementById('resultado').innerHTML = "A multiplicação é " + multiplicacao;
            break;

        case '/':
            var divisao = num1 / num2;
            document.getElementById('resultado').innerHTML = "A divisão é " + divisao;
            break;
    }
}