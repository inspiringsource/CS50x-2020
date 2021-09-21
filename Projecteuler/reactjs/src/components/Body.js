import React from "react"

class Body extends React.Component {
    render() {
      return (
        <p align="left">
          <u>
            <h4>{this.props.probN}</h4>
          </u>
          {this.props.answer}
           <a href={this.props.link}> <br /> See the code.</a>
        </p>
      )
    }
  }

export default Body;