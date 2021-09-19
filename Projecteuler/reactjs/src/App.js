import React, { Component } from 'react'
import logo from './logo.svg'
import './App.css'

class Header extends Component {
  render() {
    return (
      <p>
        <h1>Project Euler</h1>
        <footer></footer>
      </p>
    )
  }
}

const Intro = () => (
  <p className="App-intro">
    Learning React by building and solving Project Euler probelms:
  </p>
)
const Progress = () => (
  <p className="App-intro">
    <a href="https://youtu.be/ICmMVfKjEuo">Learning React</a> /{'\n'}
    <a href="https://projecteuler.net/problem=1">Next Problem</a>
  </p>
)

function App() {
  return (
    <div className="App">
      <Header />
      <Progress />
      <Intro />
    </div>
  )
}

export default App
