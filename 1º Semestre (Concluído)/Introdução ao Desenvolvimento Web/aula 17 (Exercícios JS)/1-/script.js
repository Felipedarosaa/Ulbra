function calcular() {
  var num1 = parseFloat(document.getElementById('num1').value);
  var num2 = parseFloat(document.getElementById('num2').value);
  var operacao = document.getElementById('operacao').value;

  if (operacao == '+') {
    var soma = num1 + num2;
    document.getElementById('resultado').innerHTML = "A soma é = " + soma;
  }
  else if (operacao == '-') {
    var subtracao = num1 - num2;
    document.getElementById('resultado').innerHTML = "A subtração é = " + subtracao;
  }
  else if (operacao == '*') {
    var multiplicacao = num1 * num2;
    document.getElementById('resultado').innerHTML = "A multiplicação é = " + multiplicacao;
  }
  else if (operacao == '/') {
    var divisao = num1 / num2;
    document.getElementById('resultado').innerHTML = "A divisão é = " + divisao;
  }
}