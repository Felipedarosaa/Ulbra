var numero = 10;
imprimir (numero);
//console.log(`O número é: ${numero}, de tipo ${typeof(numero)}`);

var nome = "Felipe";
imprimir (nome);
//console.log(`O nome é ${nome}, de tipo ${typeof(nome)}`);

function imprimir (valor) {
console.log(`O nome é ${valor}, de tipo ${typeof(valor)}`);
}

//faça uma função que receba dois números e um tipo de operação, quando essa operação for + então some os dois números.
//teste a mesma coisa para -, *, \.

function calcular(oper, num1, num2){
    var total = 0;
    switch (oper) {
        case '+':
            total = num1 + num2;
            break;
        case '-':
            total = num1 - num2;
            break;
        case '*':
            total = num1 * num2;
            break;
        case '/':
            total = num1 / num2;
            break;

        default:
            total = undefined;
            break;
    }
    return total;
}