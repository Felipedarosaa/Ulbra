$(document).ready(() => {

    $('section').load('pages/home.html');
    $('#menuHome').addClass('active');

    function clearClass(params) {
        $('#menuHome').removeClass('active');
        $('#menuSobre').removeClass('active');
        $('#menuProdutos').removeClass('active');
        $('#menuContato').removeClass('active');
    }

    $('#menuHome').click(() => {
        clearClass()
        $('#menuHome').addClass('active');
        $('section').load('pages/home.html');
    })

    $('#menuSobre').click(() => {
        clearClass()
        $('#menuSobre').addClass('active');
        $('section').load('pages/sobre.html');
    })

    $('#menuServicos').click(() => {
        clearClass()
        $('#menuServicos').addClass('active');
        $('section').load('pages/servicos.html');
    })

    $('#menuContato').click(() => {
        clearClass()
        $('#menuContato').addClass('active');
        $('section').load('pages/contato.html');
    })

    // a Logo do site retorna para tela inicial quando clicada =>
    $('#fotoLogo').click(() => {
        clearClass()
        $('body').load('index.html');
    })

})  



