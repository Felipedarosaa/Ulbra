// Leia um nome e um valor n e imprima o nome n vezes usando o laço for

function nomes() {
    var nome = document.getElementById('nome').value;
    var vezes = document.getElementById('vezes').value;

    for (var i = 0; i < vezes; i++) {
        alert('nome = ' + nome + ' / ' + (i + 1) + ' vezes');
    }
}   