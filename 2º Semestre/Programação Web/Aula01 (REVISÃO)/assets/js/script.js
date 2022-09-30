$(document).ready(()=>{
    $('section').load('pages/home.html')

    $('#home').click(() =>{
        $('section').load('pages/home.html')
    })
    $('#produtos').click(() =>{
        $('section').load('pages/produtos.html')
    })
    $('#sobre').click(() =>{
        $('section').load('pages/sobre.html')
    })
    $('#contato').click(() =>{
        $('section').load('pages/contato.html')
    })

})