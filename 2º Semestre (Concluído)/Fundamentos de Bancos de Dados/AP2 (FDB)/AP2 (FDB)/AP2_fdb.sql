
-- primeira atividade

create table carros (
	id int auto_increment primary key,
  	placa varchar(7) unique,
  	modelo varchar(15) not null,
  	cod_marca varchar(15) not null,
  	marca varchar(20) not null,
  	ano int not null,
  	valor decimal(12,2) not null
);

create table clientes (
    id int auto_increment primary key,
    cpf varchar(14) not null unique,
    nome varchar(50) not null,
  	sobrenome varchar(50) not null,
    telefone varchar(16) not null,
    endereco varchar(100) not null
);

create table aluguel (
    id int auto_increment primary key,
    id_carro int not null,
    id_cliente int not null,
    data_aluguel date not null,
    valor_unitario decimal(12,2) not null,
    quantidade int not null,
        constraint fk_id_carro_aluguel
            foreign key(id_carro) references carros(id),
        constraint fk_id_cliente_aluguel
            foreign key(id_cliente) references clientes(id)
);

create table contrato (
    data_devolucao date not null,
    data_contratacao date not null,
    valor_total decimal(12,2) not null,
    id_cliente int not null,
    id_aluguel int not null,
        constraint fk_id_cliente_contrato
            foreign key(id_cliente) references clientes(id),
        constraint fk_id_locacao_contrato
            foreign key(id_aluguel) references aluguel(id)
);

-- SELECT * from aluguel
-- WHERE data_aluguel>='2021-09-01' and data_aluguel<='2021-09-31'

-- SELECT * from clientes
-- WHERE sobrenome='silva';

-- SELECT valor,
-- valor * 1.20 as valor_mais_vinte_percent
-- FROM carros;




-- segunda atividade

create table pesquisador(
    id int auto_increment primary key,
    nome varchar(40) not null,
    sobrenome varchar(40) not null,
);

create table artigos(
    id int primary key,
    titulo varchar(100) not null,
    pag_inicial int not null,
    pag_final int not null,
    cod_periodico varchar(10) not null,
    titulo_periodico varchar(100) not null,
    editora varchar(100)
);

-- SELECT * from artigos
-- WHERE id=1234

-- SELECT * from artigos
-- WHERE editora='saraiva'
    
-- SELECT * from pesquisador
-- WHERE nome='joão'



-- terceira atividade

create table socios(
    id int auto_increment primary key,
    nome varchar(100) not null,
    endereco varchar(120) not null,
    numero_endereco int(10) not null,
    cod_tipo_socio varchar(20),
    desc_tipo_socio varchar(120)
);

create table servicos(
    id int auto_increment primary key,
    descricao varchar(120) not null,
    mes_referencia char(9) not null,
    valor_pago decimal(10,2) not null
);


-- SELECT * FROM servicos 
-- where valor_pago>=500.00

-- SELECT * FROM servicos
-- WHERE ano_servico=2020


-- SELECT * FROM socios
-- WHERE endereco='Barão do Rio Branco'