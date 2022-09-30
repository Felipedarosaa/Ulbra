$(document).ready(function () {

    $('#mostrar').click(function () {
        $('#conteudo').show()
    })
    $('#ocultar').click(function () {
        $('#conteudo').hide()
    })

    // Home
    $('#menu_home').click(function () {
        $('section').load('home.html')
    })


    // Calculadora
    $('#menu_calculadora').click(function () {
        $('section').load('calculadora.html', function () {
            $('#calcular').click(function () {
                var n1 = parseFloat($('#n1').val());
                var n2 = parseFloat($('#n2').val());
                var operador = $('#operador').val();
                var result = 0;
                switch (operador) {
                    case '+':
                        result = n1 + n2;
                        break;
                    case '-':
                        result = n1 - n2;
                        break;
                    case '*':
                        result = n1 * n2;
                        break;
                    case '/':
                        result = n1 / n2;
                        break;
                }
                $('#resultado').html('O resultado é ' + result);
            })
        })
    })


    // Conta de luz
    $('#menu_conta_luz').click(function () {
        $('section').load('conta.html', function () {
            $('#calcular_conta').click(function () {
                var qtdkw = parseFloat($('#qtdkw').val());
                var valorkw = parseFloat($('#valorkw').val());
                var valorConta = qtdkw * valorkw;

                if (qtdkw > 100 && qtdkw <= 200) {
                    valorConta = valorConta * 1.25;
                } else if (qtdkw > 200) {
                    valorConta = valorConta * 1.5;
                }
                $('#valorConta').html('O valor da conta é R$ ' + valorConta);
            })
        })
    })


    // Verificando maior número
    $('#menu_verifica_maior').click(function () {
        $('section').load('maior.html', function () {
            $('#ver_num').click(function () {

                var numeros = parseFloat($('#numeros').val());
                numeros = numeros.split(',');
                var maior = 0;

                for (var i = 0; i < numeros.length; i++) {
                    var valorAtual = parseFloat(numeros[i]);
                    if (valorAtual > maior) {
                        maior = valorAtual;
                    }
                }
                $('#mostrar').html('O maior número é: ' + maior);
            })
        })
    })


    // Mostrando Idades 
    $('#menu_Idades').click(function () {
        $('section').load('idades.html', function () {
            $('#mostrarIdad').click(function () {
                var idades = $('#idades').val();
                idades = idades.split(',');
                var menoresIdades = 0;
                var maioresIdades = 0;
                for (var i = 0; i < idades.length; i++) {
                    var idadeAtual = parseFloat(idades[i]);

                    if (idadeAtual < 18) {
                        menoresIdades++;
                    } else {
                        maioresIdades++;
                    }
                }
                $('#mostrarIdades').html(menoresIdades + ' pessoas são menores de idade e ' + maioresIdades + ' pessoas são maiores de idade ')
            })
        })
    })



    // fim
})