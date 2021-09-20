import React, { Component } from 'react'
import logo from './logo.svg'
import './App.css'
import Body from "./components/Body"
import Header from './components/Header'

const Progress = () => (
  <p className="App-intro">
    <a href="https://youtu.be/34fE23aib1o">Learning React</a> /{'\n'}
    <a href="https://projecteuler.net/problem=1">Next Problem</a>
  </p>
)
const Intro = (props) => <p className="App-intro">{props.myIntro}</p>



function App() {
  return (
    <div className="App">
      <Header title="Project Euler" />
      <Progress />
      <Intro myIntro="Learning React by building and solving Project Euler probelms:" />
      <Body probN="Problem 1" answer="Hello world"/>
    </div>
  )
}

export default App
