pipeline {
  agent {
    node {
      label 'build'
    }

  }
  stages {
    stage('Build') {
      steps {
        sh 'g++ main.cpp'
      }
    }

  }
}