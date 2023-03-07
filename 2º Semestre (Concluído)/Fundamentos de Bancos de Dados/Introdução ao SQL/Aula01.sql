-- comentário em sql

-- padrão de nomes?
/*
    tabelas plural
    atributs singular

    snake_case (usado no SQL)
    camelCase (js)
    PascalCase (outras linguagens)
    Abreviações em Letra Maiúscula
*/

/*
clientes(id int pk, nome char(100));
enderecos(id int pk, logradouro char(100), numero, int, bairro,cidade, estado);


create table nome_da_tabela (
    nome_do_atributo | dominio | vazios | chaves,
    nome_do_atributo | dominio | vazios | chaves
);
*/


    -- Atividade 01 --
create table clientes (
    id int not null primary key,
    nome varchar(100) not null,
    CPF char(14) not null unique
);

create table enderecos (
    id int not NULL PRIMARY KEY,
    logradouro VARCHAR(100) not null,
    numero char(10),
    bairro VARCHAR(100),
    cidade VARCHAR(100),
    estado char(2),
    id_cliente int not NULL,
        CONSTRAINT fk_clientes_enderecos
            FOREIGN KEY(id_cliente) REFERENCES clientes(id)
);
-- Fim --



    -- Atividade 02 --
CREATE TABLE engenheiros(
    id int NOT NULL PRIMARY KEY,
    nome VARCHAR(100) not NULL
);

CREATE TABLE projetos (
    id int NOT NULL PRIMARY key,
    nome VARCHAR(250) not NULL
);  

CREATE TABLE atuacoes (
    id int not null PRIMARY KEY,
    funcao VARCHAR(20),
    id_engenheiro int not NULL,
    id_projeto int not NULL,
        CONSTRAINT fk_engenheiros_atuacoes
            FOREIGN key(id_engenheiro) REFERENCES engenheiros(id),
        CONSTRAINT fk_projetos_atuacoes
            FOREIGN KEY(id_projeto) REFERENCES projetos(id)
);
-- Fim --



    -- Atividade 03 --
CREATE TABLE aluno(
    id int auto_increment PRIMARY KEY,
    nome VARCHAR(100) not null
);

create TABLE departamento(
    id int auto_increment primary KEY,
    nome VARCHAR(100) not null
);

CREATE TABLE curso(
    id int auto_increment PRIMARY KEY,
    nome VARCHAR(100) not null,
    id_dpto int not null,
    CONSTRAINT fk_departamento_curso
        FOREIGN KEY(id_dpto) REFERENCES departamento(id)
);

create TABLE professor(
    id int auto_increment primary KEY,
    nome VARCHAR(100) not null
);

create TABLE disciplina(
    id int  auto_increment primary KEY,
    nome VARCHAR(100) not null,
    id_prof int not NULL,
    CONSTRAINT fk_professor_disciplina
        FOREIGN key(id_prof) REFERENCES professor(id)
);

CREATE TABLE matricula(
    id_disciplina int not null,
    id_aluno int not null,
    data_matr DATE not null,
        CONSTRAINT fk_disciplina_matricula
            FOREIGN key(id_disciplina) REFERENCES disciplina(id),
        CONSTRAINT fk_aluno_matriula
            FOREIGN KEY(id_aluno) REFERENCES aluno(id)
);
-- Fim --