function verificarIdades() {
    var idades = document.getElementById('idades').value;
    idades = idades.split(',');

    var menoresIdades = 0;
    var maioresIdades = 0;

    for(var i=0; i < idades.length; i++) {
        var idadeAtual = parseFloat(idades[i]);

        if(idadeAtual < 18) {
            menoresIdades++;
        }else {
            maioresIdades++;
        }
    }
    document.getElementById('mostrarIdades').innerHTML = menoresIdades + ' pessoas são menores de idade e ' + maioresIdades + ' pessoas são maiores de idade ';  
}