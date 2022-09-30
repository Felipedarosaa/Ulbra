function calcular() {
     var quantidade = parseFloat(document.getElementById('quantidade').value);
     var valorUnidade = parseFloat(document.getElementById('valorUnidade').value);
     var valor = quantidade * valorUnidade;

     if (quantidade > 100 && quantidade <= 200) {
          valor = valor * 1.25
          alert("O valor do Kwh aumentou 25%");
          alert("O novo valor é: R$ " + valor);
     }
     else if (quantidade > 200) {
          valor = valor * 1.5;
          alert("O valor do Kwh aumentou 50%");
          alert("O novo valor é: R$ " + valor);
     }

}