-- 1) Liste todos os produtos cadastrados e ordene por ordem alfabética de descrição.
SELECT id,descricao from produtos ORDER BY descricao ASC

-- 2) Lista os produtos que foram pedidos e o nome do fornecedor de cada pedido.
SELECT numero_pedido, nome, quantidade from pede, produtos, fornecedor

-- 3) Mostre os produtos que já foram pedidos e o nome da categoria a que ele pertence.
SELECT numero_pedido, nome, descricao, quantidade from produtos, pede, fornecedor 

-- 4) Mostre o nome do fornecedor, a data do último pedido e a descrição do produto que ele pediu.
SELECT MAX(data_ultima_compra)data_ultima_compra, nome , descricao FROM fornecedor,pede, produtos