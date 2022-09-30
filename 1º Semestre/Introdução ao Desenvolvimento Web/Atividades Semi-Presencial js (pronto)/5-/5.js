// Leia um nome, endereço e e-mail, armazene em um array, depois imprima na tela;
function nomeEmail() {
var nome = document.getElementById('nome').value;
var endereco = document.getElementById('endereco').value;
var email = document.getElementById('email').value;

alert(`nome: ${nome} / endereço: ${endereco} / email: ${email}`);
}

