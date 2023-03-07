/* metodo 1 */
select id,nome,preco
from products
where preco >= 1000

/* metodo 2 */
select id,nome,preco,(preco*1.10) as novoPreco
from products
where preco >= 1000 


/* metodo 3 */
select id,nome,preco,(preco*1.10) as novoPreco
from products
where preco >= 1000 and 
data_cad >= '2022-11-1' and
data_cad <= '2022-11-30' 

/* metodo 4 */
select max(preco) as maior
from products
where data_cad between
'2022-09-01' and '2022-10-30' 

/* metodo 5 */
select *
from products, categorias
where P.id categoria = C.id

select p.id, c.nome as categoria


-- Mostrar produtos vendidos no mês de outubro e o valor total somente do produto
Select P.id,P.nome,VI.qtd,VI.Valor_unit, VI.qtd * VI.unit as total
from vendas_itens, produtos
where V.id = VI.id venda and 
        VI.id_produto = P.id AND
        data_cad BETWEEN '2022-10-01' and '2022-10-31'




SELECT sala, count(id) as num 
from alunos
where sala = 326 and sala = 327
group by sala