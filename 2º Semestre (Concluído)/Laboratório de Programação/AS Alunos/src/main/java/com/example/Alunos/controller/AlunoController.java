package com.example.Alunos.controller;
import com.example.Alunos.model.Aluno;
import com.example.Alunos.repository.AlunoRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;
import javax.validation.Valid;
import java.util.List;
import java.util.Optional;

@RestController
@RequestMapping("/api")
public class AlunoController {

    @Autowired
    AlunoRepository alunoRepository;
//Recuperar todas os alunos
    @GetMapping("/alunos")
    public List<Aluno> getAllAlunos(){
        return alunoRepository.findAll();
    }

    @GetMapping("/alunos/{id}")
    public Optional<Aluno> getById(@PathVariable(value = "id") Long id){
        return alunoRepository.findById(id);
    }

    @DeleteMapping("/alunos/{id}")
    public ResponseEntity<?> deleteAluno(@PathVariable(value = "id") Long id){
        Optional<Aluno> aluno = alunoRepository.findById(id);
        alunoRepository.delete(aluno.get());
        return ResponseEntity.ok().build();
    }

    @PutMapping("/alunos/{id}")
    public Aluno updateNote(@PathVariable(value = "id") Long id,
                           @Valid @RequestBody Aluno alunoDetails){
        Optional<Aluno> aluno = alunoRepository.findById(id);
        aluno.get().setNome(alunoDetails.getNome());
        aluno.get().setTurma(alunoDetails.getTurma());
        Aluno alunoResponse = alunoRepository.save(aluno.get());
        return alunoResponse;
    }

    @PostMapping("/alunos")
    public Aluno createAluno(@Valid @RequestBody Aluno aluno){
        return alunoRepository.save(aluno);
    }

}