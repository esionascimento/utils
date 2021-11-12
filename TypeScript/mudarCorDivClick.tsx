import React, { useState } from "react";
import styled, { css, keyframes } from "styled-components";

/* https://www.tutorialguruji.com/react-js/can-i-toggle-styled-component-props-based-on-onclick-event/amp/ */

/* Forma para escutar click e mudar propriedades de um component, neste caso 2 divs. Click HTML faz as divs mudar sua forma estatica para dinamica */

interface Props {
  showUp: boolean;
}

interface Props2 {
  showDown: boolean;
}

const SkillCardContainer = styled.div`
  position:relative;
  width:300px;
  height:450px;
  background:blue;
  margin:200px auto;
`;

const moveUp = keyframes`
  from{ top: 0;}
  to{ top: -50%}
`;
const moveDown = keyframes`
  from { top: 50;}
  to {top: 100%;}
`;

const UpPart = styled.div<Props>`
  position:absolute;
  width:300px;
  height:225px;
  background:red;
  box-sizing:border-box;
  top:0px;
  left:0px;
  z-index:80;
  ${props => props.showUp ? css`animation: ${moveUp} 1s linear;` : css`animation:none`};
`;

const DownPart = styled.div<Props2>`
  position:absolute;
  width:300px;
  height:225px;
  background:green;
  box-sizing:border-box;
  top:50%;
  left:0;
  z-index:80;
  ${props => props.showDown ? css`animation:${moveDown} 1s linear;` : css`animation:none`};
`;

const Button = styled.button`
  width:100px;
  height:50px;
  box-sizing:border-box;
  background:grey;
  position:absolute;
  top:50%;
  left:50%;
  transform: translate(-50%, -50%);
  z-index:100;
`;

const SkillCard = () => {
  const [isClick, setIsClick] = useState(false);

  const handleClick = () => {
    setIsClick(!isClick);
  };

  return (
    <React.Fragment>
      <SkillCardContainer>
        <UpPart showUp={isClick} ></UpPart>
          <Button onClick={handleClick}>HTML</Button>
        <DownPart showDown={isClick}></DownPart>
      </SkillCardContainer>
    </React.Fragment>
  );
};

export default SkillCard;