    -- Atividade --

create table colaborador(
    id int auto_increment primary key,
    nome varchar(100) not null,
    email varchar(100) not null,
    senha_login varchar(50) not null
);

create table coordenadores(
    id int auto_increment primary key
);

create table departamentos(
    id int auto_increment primary key
);

create table acesso_colaborador(
    dia date not null
);

create table projeto(
    id int auto_increment primary key,
    nome varchar(100) not null
);

create table projeto_lista_coordenadores(
    id_coordenador int not null,
        constraint pk_coordenador_projeto_lista_coordenadores
            foreign key(id_coordenador) references coordenador(id)
);

create table lista_projeto(
    id_projeto int not null,
        constraint pk_projeto_lista_projeto
            foreign key(id_projeto) references projeto(id)
);

create table comentario(
    id int auto_increment primary key,
    horario date not null,
    dia date
);
create table resposta_comentario(
    id_comentario int not null,
        constraint pk_comentario_resposta_comentario
            foreign key(id_comentario) references comentario(id)
);

create table patch_melhoria(
    id_departamento int not null,
    id_projeto int not null,
    descricao_melhoria varchar(800) not null,
        constraint pk_departamento_patch_melhoria
            foreign key(id_departamento) references departamento(id),
        constraint pk_projeto_patch_melhoria
            foreign key(id_projeto) references projeto(id)
);

create table departamento_att(
    registro_att int auto_increment
);

create table social(
    id int auto_increment primary key
);

create table patch_publico(
    id_projeto int not null,
    id_departamento int not null,
    descricao_melhoria varchar(800) not null,
        constraint pk_projeto_patch_melhoria
            foreign key(id_projeto) references projeto(id),
        constraint pk_departamento_patch_melhoria
            foreign key(id_departamento) references departamento(id)
);

create table publico_att(
    registro_att int auto_increment
);